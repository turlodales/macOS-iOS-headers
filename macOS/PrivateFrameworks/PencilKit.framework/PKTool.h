//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class PKInk;

@interface PKTool : NSObject <NSCopying>
{
    PKInk *_ink;
}

+ (id)_toolWithInk:(id)arg1;
+ (BOOL)_inkIsInkingTool:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKInk *ink; // @synthesize ink=_ink;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithInk:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3;
- (id)initWithType:(id)arg1 color:(id)arg2 weight:(double)arg3;

@end

