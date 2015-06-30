//
//  ViewController.h
//  RealTimeRecord
//
//  Created by François Le Brun on 17/04/2014.
//  Copyright (c) 2014 SoundFi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SoundFiASSession.h"


@interface ViewController : UIViewController <UITextFieldDelegate,SampleProtocolDelegate>
{
    SoundFiASSession *myController;
    
    NSString *myMessage;
    NSString *message;
    
    // UI

}


@property (nonatomic, nonatomic) SoundFiASSession *myController;
@property (weak, nonatomic) IBOutlet UILabel *lab_message;
@property (weak, nonatomic) IBOutlet UIButton *but_sendMessage;

- (IBAction)sendMessage:(id)sender;


@end
