//
//  pcMapViewController.h
//  PosChat
//
//  Created by Robert Bastian on 22/02/2014.
//  Copyright (c) 2014 Robert Bastian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface pcMapViewController : UIViewController
@property (strong,nonatomic) NSString* sourceid;
@property (strong,nonatomic) NSString* entryid;
@property (strong,nonatomic) IBOutlet MKMapView *map;
@property (strong,nonatomic) IBOutlet UIButton *cancelButton;

-(IBAction)close:(id)sender;

@end
