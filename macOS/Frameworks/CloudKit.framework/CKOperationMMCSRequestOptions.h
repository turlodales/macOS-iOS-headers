//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding>
{
    BOOL _resumableContainerLimpMode;
    BOOL _chunkingLibraryCorruptionMode;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL chunkingLibraryCorruptionMode; // @synthesize chunkingLibraryCorruptionMode=_chunkingLibraryCorruptionMode;
@property(nonatomic) BOOL resumableContainerLimpMode; // @synthesize resumableContainerLimpMode=_resumableContainerLimpMode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

