//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSImage;

__attribute__((visibility("hidden")))
@interface _NSButtonImage : NSObject <NSCopying, NSCoding>
{
    NSImage *image;
    BOOL useDisabledEffect;
    BOOL useHighlightEffect;
}

+ (id)image:(id)arg1;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

