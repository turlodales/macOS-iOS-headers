//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class NSUUID;

@interface TTTodo : NSObject <NSCopying>
{
    BOOL _done;
    NSUUID *_uuid;
}

+ (id)todoWithIdentifier:(id)arg1 done:(BOOL)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL done; // @synthesize done=_done;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)todoWithDone:(BOOL)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 done:(BOOL)arg2;
- (id)serialize;
- (void)saveToArchive:(struct Todo *)arg1;
- (id)initWithArchive:(const struct Todo *)arg1;
- (id)initWithData:(id)arg1;

@end

