//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TUCallHistoryManager : NSObject
{
    id <TUCallHistoryManagerDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TUCallHistoryManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end

