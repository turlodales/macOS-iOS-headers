//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIKeyboardActivityObserving-Protocol.h>

@class NSUUID;

@protocol TIContactManaging <TIKeyboardActivityObserving>
@property(readonly, copy, nonatomic) NSUUID *contactCollectionUUID;
- (void)unload;
- (void)getOnce:(void (^)(TIContactCollection *))arg1;
- (void)removeContactObserver:(void (^)(TIContactCollection *))arg1;
- (void (^)(TIContactCollection *))addContactObserver:(void (^)(TIContactCollection *))arg1;
@end

