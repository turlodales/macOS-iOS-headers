//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIKeyboardActivityObserving.h"

@class NSUUID;

@protocol TIContactManaging <TIKeyboardActivityObserving>
@property(readonly, copy, nonatomic) NSUUID *contactCollectionUUID;
- (void)unload;
- (void)getOnce:(void (^)(TIContactCollection *))arg1;
- (void)removeContactObserver:(void (^)(TIContactCollection *))arg1;
- (void (^)(TIContactCollection *))addContactObserver:(void (^)(TIContactCollection *))arg1;
@end

