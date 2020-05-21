//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface IPARectArray : NSObject <NSCopying, NSMutableCopying>
{
    struct RectArray *_imp;
}

+ (id)rectArrayWithRect:(struct CGRect)arg1;
+ (id)rectArray;
- (void)enumerateRects:(CDUnknownBlockType)arg1;
- (struct CGRect)rectAtIndex:(unsigned long long)arg1;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRectArray:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;
- (id)init;

@end

