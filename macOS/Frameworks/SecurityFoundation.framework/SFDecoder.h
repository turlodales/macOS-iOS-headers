//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFCodingOptions;

__attribute__((visibility("hidden")))
@interface SFDecoder : NSObject
{
    id _decoderInternal;
}

- (void).cxx_destruct;
@property(copy, nonatomic) SFCodingOptions *options;
- (id)decodeValueOfType:(Class)arg1 fromData:(id)arg2 error:(id)arg3;
- (id)initWithOptions:(id)arg1;

@end

