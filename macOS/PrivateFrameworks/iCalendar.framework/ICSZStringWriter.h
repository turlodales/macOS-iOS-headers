//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSAppendable-Protocol.h>

@class NSMutableData, NSString;

@interface ICSZStringWriter : NSObject <ICSAppendable>
{
    struct z_stream_s _strm;
    NSMutableData *_result;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_appendBytes:(const void *)arg1 length:(unsigned long long)arg2 andFlush:(BOOL)arg3;
- (id)zResult;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

