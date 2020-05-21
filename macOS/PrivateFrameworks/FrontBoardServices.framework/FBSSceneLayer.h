//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"

@class CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding>
{
    CAContext *_context;
    double _level;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_context) CAContext *context; // @synthesize context=_context;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, nonatomic) long long alignment;
- (id)_succinctDescription;
- (double)_unsafe_level;
- (void)_unsafe_captureLevel;
- (void)dealloc;
- (id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2;
- (id)init;
- (BOOL)isCAContextLayer;
- (BOOL)isExternalSceneLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

