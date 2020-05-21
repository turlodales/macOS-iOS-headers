//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DGConstImageProcessor.h"

@class NSString;

@interface DGGetPixelsConvertFormatProcessor : NSObject <DGConstImageProcessor>
{
    struct PFIntRect_st _destArea;
    int _destFormat;
    void *_destPtr;
    long long _rowBytes;
}

- (void)processConstArea:(struct PFIntRect_st)arg1 bufferPtr:(const void *)arg2 rowBytes:(long long)arg3 format:(int)arg4;
- (id)initWithArea:(struct PFIntRect_st)arg1 destFormat:(int)arg2 destPtr:(void *)arg3 rowBytes:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

