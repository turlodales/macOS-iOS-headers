//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreChart/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol CCVegaLogProxyHandling <JSExport>
- (BOOL)setPropertyOnObject:(JSValue *)arg1 named:(NSString *)arg2 toValue:(JSValue *)arg3;
- (JSValue *)getPropertyOnObject:(JSValue *)arg1 named:(NSString *)arg2;

@optional
- (BOOL)setPropertyOnObject:(JSValue *)arg1 named:(NSString *)arg2 toValue:(JSValue *)arg3 __JS_EXPORT_AS__set:(id)arg4;
- (JSValue *)getPropertyOnObject:(JSValue *)arg1 named:(NSString *)arg2 __JS_EXPORT_AS__get:(id)arg3;
@end

