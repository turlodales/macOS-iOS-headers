//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class EKChangeSet, NSString;

@interface EKRelationChange : NSObject <NSCopying>
{
    NSString *_uniqueIdentifier;
    NSString *_relationChangeKey;
    EKChangeSet *_changeSet;
}

@property(retain) EKChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(retain) NSString *relationChangeKey; // @synthesize relationChangeKey=_relationChangeKey;
@property(retain) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

