//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@interface NSCoder (VisionAdditions)
-     // Error parsing type: {?=[4]}24@0:8@16, name: vn_decode4x4MatrixForKey:
-     // Error parsing type: v88@0:8{?=[4]}16@80, name: vn_encode4x4Matrix:forKey:
-     // Error parsing type: {?=[3]}24@0:8@16, name: vn_decode3x3MatrixForKey:
-     // Error parsing type: v72@0:8{?=[3]}16@64, name: vn_encode3x3Matrix:forKey:
- (struct CGAffineTransform)vn_decodeCGAffineTransformForKey:(id)arg1;
- (void)vn_encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;
- (unsigned int)vn_decodeCodingVersionForKey:(id)arg1;
- (void)vn_encodeCodingVersion:(unsigned int)arg1 forKey:(id)arg2;
@end

