//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/NSObject-Protocol.h>

@class NSData, NSString;

@protocol MapsSuggestionsDonateeProxy <NSObject>
- (void)donateSignalPackData:(NSData *)arg1 handler:(void (^)(void))arg2;
- (void)donateETAData:(NSData *)arg1 destinationKey:(NSString *)arg2 handler:(void (^)(void))arg3;
@end

