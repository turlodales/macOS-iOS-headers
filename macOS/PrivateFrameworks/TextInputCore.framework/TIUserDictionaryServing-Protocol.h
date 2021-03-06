//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSUUID;

@protocol TIUserDictionaryServing <NSObject>
@property(readonly, copy, nonatomic) NSUUID *userDictionaryUUID;
- (void)startServer;
- (void)getPhraseShortcutPairs:(void (^)(NSArray *))arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(void (^)(NSArray *))arg1;
@end

