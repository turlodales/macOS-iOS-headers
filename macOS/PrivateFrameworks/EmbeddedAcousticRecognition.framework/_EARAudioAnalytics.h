//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface _EARAudioAnalytics : NSObject <NSCopying>
{
    NSDictionary *_speechRecognitionFeatures;
    NSDictionary *_acousticFeatures;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *acousticFeatures; // @synthesize acousticFeatures=_acousticFeatures;
@property(readonly, copy, nonatomic) NSDictionary *speechRecognitionFeatures; // @synthesize speechRecognitionFeatures=_speechRecognitionFeatures;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2;

@end

