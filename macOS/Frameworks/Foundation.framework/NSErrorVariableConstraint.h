//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

@class NSISVariable;

__attribute__((visibility("hidden")))
@interface NSErrorVariableConstraint : NSLayoutConstraint
{
    NSISVariable *_errorVariable;
    double _errorValue;
}

- (int)nsis_orientationHintForVariable:(id)arg1;
- (id)constrainedConstraint;
- (BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(char *)arg2;
- (void)dealloc;
- (id)initWithVariable:(id)arg1 value:(double)arg2;

@end

