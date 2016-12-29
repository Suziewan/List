//
//  AddItemViewController.h
//  List
//
//  Created by Angie Linton on 2016-12-28.
//  Copyright © 2016 Angie Linton. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate <NSObject>

- (void)didSaveNewTodo: (NSString *)todoText;

@end


@interface AddItemViewController : UIViewController

@property (nonatomic, strong) id <AddItemViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;


@end
