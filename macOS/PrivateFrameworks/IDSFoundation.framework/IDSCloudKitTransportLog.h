//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSCKDatabase, NSObject<OS_dispatch_queue>;

@interface IDSCloudKitTransportLog : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCKDatabase *_database;
}

+ (id)_messageFromRecord:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDSCKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)disabled_fetchChangesSinceToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_transportRecordZoneID;
- (void)dropZone:(CDUnknownBlockType)arg1;
- (void)createZone:(CDUnknownBlockType)arg1;
- (void)fetchChangesSinceToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_recordIDsToFetch;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;

@end

