//
//  ViewController.h
//  HearMeNow
//
//  Created by Nenad on 4/14/17.
//  Copyright © 2017 Nenad.Dj. All rights reserved.
//

#import <UIKit/UIKit.h>


#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVAudioPlayerDelegate, AVAudioRecorderDelegate>

@property (weak, nonatomic) IBOutlet UIButton *recordButton;

@property (weak, nonatomic) IBOutlet UIButton *playButton;

- (IBAction)recordPressed:(id)sender;

- (IBAction)playPressed:(id)sender;

@end

