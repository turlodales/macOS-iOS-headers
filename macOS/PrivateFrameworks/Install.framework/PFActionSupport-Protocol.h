//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, NSTask;

@protocol PFActionSupport
- (NSDictionary *)runAction:(NSString *)arg1 withContextDictionary:(NSDictionary *)arg2 localization:(id)arg3;
- (NSTask *)taskForAction:(NSString *)arg1 withContextDictionary:(NSDictionary *)arg2;
- (BOOL)hasAction:(NSString *)arg1;
@end

