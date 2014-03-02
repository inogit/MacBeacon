//
//  MBCBeaconAdvertisementData.h
//  MacBeacon
//
//  Created by 井上 祐寛 on 2014/03/02.
//  Copyright (c) 2014年 takuhiro inoue. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface MBCBeaconAdvertisementData : NSObject

@property (strong,nonatomic) NSUUID *proximityUUID;
@property (assign,nonatomic) uint16_t major;
@property (assign,nonatomic) uint16_t minor;
@property (assign,nonatomic) int8_t measuredPower;

#ifndef MacBeacon_MBCBeaconAdvertisementData_h
#define MacBeacon_MBCBeaconAdvertisementData_h

- (id)initWithProximityUUID:(NSUUID *)proximityUUID
                      major:(uint16_t)major
                      minor:(uint16_t)minor
              measuredPower:(int8_t)power;


- (NSDictionary *)beaconAdvertisement;

#endif
