//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PRSTableAlignmentSchema : NSObject
{
    NSArray *_internalAlignments;
    NSArray *_externalAlignments;
    NSArray *_columnsWithEqualWidths;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *columnsWithEqualWidths; // @synthesize columnsWithEqualWidths=_columnsWithEqualWidths;
@property(retain, nonatomic) NSArray *externalAlignments; // @synthesize externalAlignments=_externalAlignments;
@property(retain, nonatomic) NSArray *internalAlignments; // @synthesize internalAlignments=_internalAlignments;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDecodedColumnAlignments:(id)arg1 dataAlignments:(id)arg2 columnEqualWidths:(id)arg3;
- (id)initWithInternalAlignmentArray:(id)arg1 externalAlignmentsArray:(id)arg2 columnWithEqualWidths:(id)arg3;

@end

