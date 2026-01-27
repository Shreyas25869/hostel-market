import re

entries = """
jss 84183, jss 359052 , jss 558008, jss 200182, jss 123463, jss 96069, jss 106528, 
kiet 118795, kiet 541912, kiet 307487, kiet 153900, kiet 179160, kiet 137467, 
kiet 162204, kiet 391251, kiet 194222, 
akgarg 124911, akgarg 1174108, akgarg 362879, akgarg 217234, akgarg 200893, 
akagarg 226258, akgarg 147276, akgarg 154722, akgarg 221191, akgarg 560900, 
abes 300882, abes 585727, abes 323836, abes 357556, abes 543975 (all india), 
niet 374151, niet 733335, niet 911027, niet 682206, niet 511039, niet 459710, 
niet 446120, niet 790102, niet 616697, niet 1289282, niet 458820, niet 602084, 
niet 521697, niet 470662, 
ims 735441, ims 848964, ims 1278023, ims 877816, ims 1308804, 
glbajaj 170364, glbajaj 482583, glbajaj 311566, glbajaj 250960, glbajaj 218964, 
glbajaj 287729, glbajaj 1083075, 
nitra 493424, nitra 518425 , 
ipec 675458, ipec 1349726, ipec 1079724, ipec 810738, ipec 940755, 
psit 413777, psit 703746, psit 625748, psit 509259, psit 393622, psit 587691, 
rkgit 517625, rkgit 963560, rkgit 649887, rkgit 519615, rkgit 718707, rkgit 1010681,galgotias 188005, 
gagotias 639196, galgotias 930709, galgotias 692867, galgotias 350425, galgotias 295692, 
galgotias 403979, galgotias 387672, galgotias 243030, galgotias 323233, 
sonebhadra 152571, sonebhadra 362307, sonebhadra 580470, 
its 1300000 , its 930657, its 632469, its 1164472, 
basti 231902, basti 308412, basti 544923, 
biet 73197, biet 117132, biet 90411, biet 80756, 
iet 39991, iet 68783, iet 58151, iet 48529, 
knit 63242, knit 112697, knit 76994, knit 89432, 
gniot 467348, gniot 742874, gniot 603295, gniot 961691, gniot 452427, 
gniot 771046, gniot 742597, gniot 1235614, 
gl mathura 529665, gl mathura 1282444, 
banda 375601, banda 146177, 
bijnor 659297, bijnor 212868, 
kannauj 212509, kannouj 773720, kannauj 486886,  
mirzapur 397706, mirzapur 364735, mirzapur 558026, mirzapur 587777, 
mainpuri 232708, mainpuri 1335722, mainpuri 294411, 
pratapgarh 390204, pratapgarh 905039
"""

# Extract (text, number) pairs
entry_pairs = re.findall(r'([a-zA-Z]+)\s+(\d+)', entries)
entry_pairs = [(text, int(num)) for text, num in entry_pairs]

# Sort by number
sorted_entries = sorted(entry_pairs, key=lambda x: x[1])

# Print result
for text, num in sorted_entries:
    print(f"{text} {num}")

