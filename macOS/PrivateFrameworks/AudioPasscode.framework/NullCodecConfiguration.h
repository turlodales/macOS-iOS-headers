//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioPasscode/AUPasscodeCodecConfiguration.h>

#import <AudioPasscode/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding>
{
    float _retrievalCallbackInterval;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) float retrievalCallbackInterval; // @synthesize retrievalCallbackInterval=_retrievalCallbackInterval;
- (id)initWithCommandLineArgs:(id)arg1;
- (id)commandLineOptions;
- (void)setDefaultValues;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

