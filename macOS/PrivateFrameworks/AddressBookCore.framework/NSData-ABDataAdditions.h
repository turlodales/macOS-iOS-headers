//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (ABDataAdditions)
+ (unsigned long long)abEncodedBase64LengthForDataOfLength:(unsigned long long)arg1 breakingLines:(BOOL)arg2;
+ (unsigned long long)abMaxDataLengthFittingInBase64EncodingLength:(unsigned long long)arg1;
- (void)_ab_logWithTag:(id)arg1 extension:(id)arg2;
- (id)abHexString;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned long long)arg1;
- (id)abEncodeBase64DataBreakLines:(BOOL)arg1 allowSlash:(BOOL)arg2 padChar:(BOOL)arg3;
- (id)abMD5Hash;
@end

