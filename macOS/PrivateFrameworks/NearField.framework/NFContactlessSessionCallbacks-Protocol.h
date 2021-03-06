//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearField/NFSessionCallbackInterface-Protocol.h>
#import <NearField/NSObject-Protocol.h>

@class NFFieldNotification, NSDictionary, NSString;

@protocol NFContactlessSessionCallbacks <NSObject, NFSessionCallbackInterface>
- (void)didSelectApplet:(NSString *)arg1;
- (void)didDetectFieldNotification:(NFFieldNotification *)arg1;
- (void)didDetectField:(BOOL)arg1;

@optional
- (void)didFelicaStateChange:(NSDictionary *)arg1;
@end

