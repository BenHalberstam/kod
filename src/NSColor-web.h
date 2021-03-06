// Copyright (c) 2010-2011, Rasmus Andersson. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

@interface NSColorSpace (Kod)
+ (NSColorSpace*)genericLabColorSpace;
@end

@interface NSColor (web)

/**
 * sRGB color from a string of hex digits in one of the following formats:
 * - RRGGBBAA
 * - RRGGBB
 * - RGBA
 * - RGB
 */
+ (NSColor*)colorWithSRGBHexString:(NSString*)str;

/// A random color
+ (NSColor*)randomColorWithSaturation:(CGFloat)saturation
                           brightness:(CGFloat)brightness
                                alpha:(CGFloat)alpha;

/// Create a RRGGBBAA string of hex digits representing this color in sRGB
- (NSString*)sRGBhexString;

/// Return a 32-bit unsigned integer representation in sRGB (host byte order)
- (uint32_t)sRGBUInt32Value;

/// The color in sRGB color space (returns self if already in sRGB)
- (NSColor*)colorUsingSRGBColorSpace;

/// Color converted to LAB color space
- (NSColor*)labColor;

/// Luminance
- (CGFloat)luminance;

/// Returns whether the color is in the dark half of the spectrum
- (BOOL)isDarkColor;

/// Returns a color that is legible on this color. (Nothing to do with textColor)
- (NSColor*)legibleTextColor;

@end
