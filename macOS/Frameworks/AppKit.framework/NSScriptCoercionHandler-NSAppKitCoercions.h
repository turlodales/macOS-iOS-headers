//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSScriptCoercionHandler.h>

@interface NSScriptCoercionHandler (NSAppKitCoercions)
+ (id)coerceTextStorage:(id)arg1 toData:(Class)arg2;
+ (id)coerceData:(id)arg1 toTextStorage:(Class)arg2;
+ (id)coerceTextStorage:(id)arg1 toString:(Class)arg2;
+ (id)coerceString:(id)arg1 toTextStorage:(Class)arg2;
+ (id)coerceColor:(id)arg1 toData:(Class)arg2;
+ (id)coerceData:(id)arg1 toColor:(Class)arg2;
+ (id)coerceColor:(id)arg1 toArray:(Class)arg2;
+ (id)coerceArray:(id)arg1 toColor:(Class)arg2;
+ (id)coerceColor:(id)arg1 toString:(Class)arg2;
+ (id)coerceString:(id)arg1 toColor:(Class)arg2;
- (void)_setUpAppKitCoercions;
@end

