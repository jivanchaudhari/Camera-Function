//
//  ViewController.h
//  JCCameraFunction
//
//  Created by Student P_02 on 04/11/16.
//  Copyright © 2016 Jivan Chaudhari. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>


@interface ViewController : UIViewController<UIImagePickerControllerDelegate,MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageViewPhoto;





- (IBAction)actionCamera:(id)sender;

- (IBAction)actionAlumOpen:(id)sender;
- (IBAction)actionOpenMail:(id)sender;

- (IBAction)actionMessage:(id)sender;
@end

