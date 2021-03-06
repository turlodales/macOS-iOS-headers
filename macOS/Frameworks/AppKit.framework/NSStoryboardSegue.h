//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSStoryboardSegue : NSObject
{
    CDUnknownBlockType _performHandler;
    NSString *_identifier;
    id _sourceController;
    id _destinationController;
    CDUnknownBlockType _prepareHandler;
}

+ (id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(CDUnknownBlockType)arg4;
@property(copy) CDUnknownBlockType prepareHandler; // @synthesize prepareHandler=_prepareHandler;
@property(copy) CDUnknownBlockType performHandler; // @synthesize performHandler=_performHandler;
@property(readonly) id destinationController; // @synthesize destinationController=_destinationController;
@property(readonly) id sourceController; // @synthesize sourceController=_sourceController;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)perform;
- (void)_prepare;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)dealloc;

@end

