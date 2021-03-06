//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface CAConstraint : NSObject <NSSecureCoding>
{
    NSString *_srcId;
    unsigned int _srcAttr:16;
    unsigned int _attr:16;
    double _scale;
    double _offset;
}

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3;
+ (id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 offset:(double)arg4;
+ (id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 scale:(double)arg4 offset:(double)arg5;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)description;
@property(readonly) double offset;
@property(readonly) double scale;
@property(readonly) int attribute;
@property(readonly) int sourceAttribute;
@property(readonly) NSString *sourceName;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 scale:(double)arg4 offset:(double)arg5;

@end

