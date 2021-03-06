//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <vCard/NSObject-Protocol.h>

@class NSArray, NSData, NSSet, NSString;

@protocol CNVCardParsedResultBuilder <NSObject>
- (NSSet *)validCountryCodes;
- (void)setUnknownProperties:(NSArray *)arg1;
- (BOOL)setImageData:(NSData *)arg1 forReference:(NSString *)arg2 clipRects:(NSArray *)arg3;
- (id)valueForProperty:(NSString *)arg1;
- (BOOL)setValues:(NSArray *)arg1 labels:(NSArray *)arg2 isPrimaries:(NSArray *)arg3 forProperty:(NSString *)arg4;
- (BOOL)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (BOOL)canSetValueForProperty:(NSString *)arg1;
- (id)build;
@end

