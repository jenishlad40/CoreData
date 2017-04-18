//
//  DeviceDetailViewControllerUIViewController.h
//  CoreData Demo
//
//  Created by test on 4/5/17.
//  Copyright © 2017 NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeviceDetailViewControllerUIViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *versionTextFiel;
@property (weak, nonatomic) IBOutlet UITextField *companyTextFiel;

- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@end
