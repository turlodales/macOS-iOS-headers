//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUAssertionPolicyHandler.h"

@class NSArray, NSMutableArray, NSString;

@interface NUAssertionPolicyComposite : NSObject <NUAssertionPolicyHandler>
{
    NSMutableArray *_policies;
}

- (void).cxx_destruct;
@property(readonly) NSArray *policies; // @synthesize policies=_policies;
- (void)notifyAssertion:(id)arg1;
- (void)addPolicy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

