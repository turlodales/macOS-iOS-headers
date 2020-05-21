//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject <NSStreamDelegate>
{
    NSOutputStream *_oStream;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOutputStream *oStream; // @synthesize oStream=_oStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)endRequest;
- (void)logData:(id)arg1;
- (id)initWithFilePath:(id)arg1 appendHdr:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

