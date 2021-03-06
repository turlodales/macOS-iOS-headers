//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTextCheckingResult;

__attribute__((visibility("hidden")))
@interface PRRecordedCorrection : NSObject
{
    NSTextCheckingResult *_correctionResult;
    NSString *_correctedString;
    BOOL _hasRecordedResponse;
}

@property BOOL hasRecordedResponse; // @synthesize hasRecordedResponse=_hasRecordedResponse;
- (id)correctedString;
- (id)correctionResult;
- (id)description;
- (void)dealloc;
- (id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2;

@end

