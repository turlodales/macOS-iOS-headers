//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AACCore/AERDisplayCaptureAssertion-Protocol.h>

__attribute__((visibility("hidden")))
@interface AERConcreteDisplayCaptureAssertion : NSObject <AERDisplayCaptureAssertion>
{
    BOOL _release;
}

@property(nonatomic, getter=didRelase) BOOL release; // @synthesize release=_release;
- (void)releaseDisplay;
- (void)dealloc;

@end

