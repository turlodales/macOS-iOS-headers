//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol AFSettingsDelegate <NSObject>

@optional
- (void)_settingsConnectionServerVerificationReport:(NSDictionary *)arg1;
- (void)_settingsConnectionPartialVerificationResult:(NSDictionary *)arg1;
- (void)_settingsConnectionDidDisconnect;
@end

