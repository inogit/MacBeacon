//
//  MBCAppDelegate.h
//  MacBeacon
//
//  Created by 井上 祐寛 on 2014/03/02.
//  Copyright (c) 2014年 takuhiro inoue. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <IOBluetooth/IOBluetooth.h>

#import "MBCBeaconAdvertisementData.h"

@end
@interface MBCAppDelegate : NSObject <NSApplicationDelegate, CBPeripheralManagerDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (strong, nonatomic) CBPeripheralManager *manager;

@end
