//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface DownloadRecord : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *application; // @dynamic application;
@property(copy, nonatomic) NSUUID *downloadId; // @dynamic downloadId;
@property(nonatomic) double requestTime; // @dynamic requestTime;
@property(retain, nonatomic) NSData *response; // @dynamic response;
@property(nonatomic) long long startSLHRevision; // @dynamic startSLHRevision;

@end

