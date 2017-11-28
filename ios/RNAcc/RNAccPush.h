//
//  RNAccPush.h
//  RNAcc
//
//  Copyright © 2017 Facebook. All rights reserved.
//

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#else
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"
#endif

#import <Accengage/Accengage.h>

@interface RNAccPush : RCTEventEmitter <RCTBridgeModule, ACCPushDelegate>

+ (id)sharedManager;

@end
