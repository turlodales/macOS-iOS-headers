//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSPControlConnection : NSObject
{
    unsigned long long _flowIdentifier;
}

@property(readonly) unsigned long long flowIdentifier; // @synthesize flowIdentifier=_flowIdentifier;
- (void)fetchConnectionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initFromNWConnection:(id)arg1;
- (id)initFromConnection:(id)arg1;
- (id)initFromTask:(id)arg1;
- (id)initFromStream:(id)arg1;
- (id)initFromMetadata:(id)arg1;

@end

