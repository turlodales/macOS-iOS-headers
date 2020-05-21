//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSDate, NSNumber, NSSet, NSString, NSURL;

@interface PLSyncSaveJob : NSObject
{
    BOOL hasVideoComplement;
    BOOL isVideo;
    BOOL isSyncComplete;
    BOOL _cleanupSyncState;
    NSArray *facesInfo;
    NSURL *originalAssetURL;
    NSURL *videoComplementURL;
    NSString *uuid;
    NSDate *creationDate;
    NSDate *modificationDate;
    NSSet *albumURIs;
    CLLocation *location;
    NSNumber *sortToken;
    NSString *originalFileName;
    NSDate *_cleanupBeforeDate;
    CDUnknownBlockType _finishedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(copy, nonatomic) NSDate *cleanupBeforeDate; // @synthesize cleanupBeforeDate=_cleanupBeforeDate;
@property(nonatomic) BOOL cleanupSyncState; // @synthesize cleanupSyncState=_cleanupSyncState;
@property(nonatomic) BOOL isSyncComplete; // @synthesize isSyncComplete;
@property(retain, nonatomic) NSString *originalFileName; // @synthesize originalFileName;
@property(retain, nonatomic) NSNumber *sortToken; // @synthesize sortToken;
@property(copy, nonatomic) CLLocation *location; // @synthesize location;
@property(copy, nonatomic) NSSet *albumURIs; // @synthesize albumURIs;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) BOOL isVideo; // @synthesize isVideo;
@property(nonatomic) BOOL hasVideoComplement; // @synthesize hasVideoComplement;
@property(retain, nonatomic) NSURL *videoComplementURL; // @synthesize videoComplementURL;
@property(retain, nonatomic) NSURL *originalAssetURL; // @synthesize originalAssetURL;
@property(retain, nonatomic) NSArray *facesInfo; // @synthesize facesInfo;
- (id)description;
- (void)processFacesWithBlock:(CDUnknownBlockType)arg1;
- (id)serializedData;
- (id)initFromSerializedData:(id)arg1;

@end

