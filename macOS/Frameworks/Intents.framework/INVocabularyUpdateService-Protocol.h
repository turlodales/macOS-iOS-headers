//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol INVocabularyUpdateService <NSObject>
- (oneway void)askToSyncSlot:(NSString *)arg1;
- (oneway void)recordVocabulary:(NSArray *)arg1 forIntentSlot:(NSString *)arg2 withValidationCompletion:(void (^)(BOOL))arg3;
- (oneway void)deleteEverything;
@end

