//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class MFEWSBodyFetchOperation, NSArray, NSDictionary;

@protocol MFEWSBodyFetchOperationDelegate <NSObject>
- (void)bodyFetchOperation:(MFEWSBodyFetchOperation *)arg1 didFetchBodiesByMessage:(NSDictionary *)arg2 calendarEventsByMessage:(NSDictionary *)arg3 missedMessages:(NSArray *)arg4;
@end

