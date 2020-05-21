//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureQualityItem : NSObject
{
    NSString *_localizedName;
    NSDictionary *_options;
    NSString *_sessionPreset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
- (BOOL)applyToSession:(id)arg1;
@property(readonly, copy) NSString *localizedName;
@property(readonly, copy) NSString *identifier;
- (id)initWithSessionPreset:(id)arg1 localizedName:(id)arg2;
- (id)initWithOptions:(id)arg1;

@end

