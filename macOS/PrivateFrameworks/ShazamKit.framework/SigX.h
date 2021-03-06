//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SigX : NSObject
{
    void *_mySigX;
}

+ (basic_string_a1f69cfb)getVersion;
@property(nonatomic) void *mySigX; // @synthesize mySigX=_mySigX;
- (void)dealloc;
- (BOOL)getSignature:(struct vector<char, std::__1::allocator<char>> *)arg1 error:(id *)arg2;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)flowFloatSamples:(float *)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id *)arg4;
- (BOOL)flowIntSamples:(short *)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id *)arg4;
- (BOOL)flowFloatSamples:(float *)arg1 sampleCount:(int)arg2 error:(id *)arg3;
- (BOOL)flowIntSamples:(const short *)arg1 sampleCount:(int)arg2 error:(id *)arg3;
- (id)initWithSignatureType:(int)arg1 sampleRate:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithSignatureType:(int)arg1 sampleRate:(unsigned int)arg2 signatureOptions:(int)arg3 error:(id *)arg4;
- (void)FillUnknownError:(id *)arg1;
- (void)ConvertException:(const struct exception *)arg1 toError:(id *)arg2;
- (void)ConvertSystemError:(const struct system_error *)arg1 toError:(id *)arg2;
- (BOOL)flowBuffer:(id)arg1 error:(id *)arg2;

@end

