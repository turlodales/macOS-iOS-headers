//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTaskHandlerOperation.h"

@interface IMAPPersistenceTaskOperation : MCTaskHandlerOperation
{
    id <IMAPMessageDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IMAPMessageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_messagesForPersistentIDs:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithDataSource:(id)arg1;

@end

